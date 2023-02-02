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

//����ϱ� h�� 24���� ũ�� -24

//���ڸ� 60���� ������ �� ��ŭ h�� �߰�, �������� m, ���� m+�������� 60���� ũ�� -60��ŭ m�� �߰��ϰ� h+1