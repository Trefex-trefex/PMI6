
// ������� 1
void preobr(int sec, int& h, int& m, int& s) {
    h = sec / 3600;  
    sec %= 3600;    
    m = sec / 60;   
    s = sec % 60;  
}

// ������� 2
double summa(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) 
        s += 1.0 / (i * i);
    return s / 4; // �� �������� ���������� ����� ��������� �� ���� ����� �.�. ����� 1 / 4
}