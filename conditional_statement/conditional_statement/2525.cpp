#include <stdio.h>

int main()
{
	int h;
	int m;
	int time;

	int h_v, m_v;
	int h_f=0, m_f=0;

	scanf_s("%d %d", &h, &m);
	scanf_s("%d", &time);

	h_v = time / 60;
	m_v = time % 60;

	if ((h+h_v > 23) && (m+m_v > 59)) {
		m_f = m + m_v - 60;
		h_f = h + h_v -24 + 1;
	}
	else if ((h + h_v > 23) && (m + m_v <= 59)) {
		m_f = m + m_v;
		h_f = h + h_v - 24;
	}
	else if ((h + h_v <= 23) && (m + m_v > 59)) {
		m_f = m + m_v - 60;
		h_f = h + h_v + 1;
		if (h_f > 23)
			h_f = h_f - 24;
	}
	else if ((h + h_v <= 23) && (m + m_v <= 59)) {
		m_f = m + m_v;
		h_f = h + h_v;
	}

	printf("%d %d", h_f, m_f);

	return 0;

}

//몫더하기 h가 24보다 크면 -24

//숫자를 60으로 나누고 그 몫만큼 h에 추가, 나머지는 m, 만약 m+나머지가 60보다 크면 -60만큼 m에 추가하고 h+1