#include <stdio.h>

int main()
{
    int h, m, s;
    int duracao;
    int total_inicio, total_fim;
    int h_fim, m_fim, s_fim;

    printf("Digite o hora de inicio: ");
    scanf("%d", &h);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &m);

    printf("Digite os segundos de inicios: ");
    scanf("%d", &s);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_inicio = h * 3600 + m * 60 + s;
    total_fim = total_inicio + duracao;

    h_fim = (total_fim / 3600) % 24;
    m_fim = (total_fim / 60) % 60;
    s_fim = total_fim % 60;

    printf("O horario de termino eh: %02d:%02d:%02dd", h_fim, m_fim, s_fim);

    return 0;
}