#include <iostream>

using namespace std;

int main()
{
            int dia1, hora1, minuto1, segundo1, dia2, hora2, minuto2, segundo2, duracaoDia, duracaoHora, duracaoMinuto, duracaoSegundo, inicio, fim, duracao, resto;

            // Ler a primeira linha, armazenando o valor de W (dia)
            string[] valores = Console.ReadLine().Split(' ');
            dia1 = int.Parse(valores[1]);

            // Ler a segunda linha, armazenando o valor de X (hora), Y (minuto), Z (segundo)
            valores = Console.ReadLine().Split(' ');
            hora1 = int.Parse(valores[0]);
            minuto1 = int.Parse(valores[2]);
            segundo1 = int.Parse(valores[4]);

            // Ler a terceira linha, armazenando o valor de W (dia)
            valores = Console.ReadLine().Split(' ');
            dia2 = int.Parse(valores[1]);

            // Ler a segunda linha, armazenando o valor de X (hora), Y (minuto), Z (segundo)
            valores = Console.ReadLine().Split(' ');
            hora2 = int.Parse(valores[0]);
            minuto2 = int.Parse(valores[2]);
            segundo2 = int.Parse(valores[4]);

            // Calculando o valor do inicio e fim, convertendo tudo para segundos
            inicio = (dia1 - 1) * 24 * 60 * 60 + hora1 * 60 * 60 + minuto1 * 60 + segundo1;
            fim = (dia2 - 1) * 24 * 60 * 60 + hora2 * 60 * 60 + minuto2 * 60 + segundo2;
            
            // Calculando a duracao em segundos
            duracao = fim - inicio;

            // Agora vamos desmembrar a duracao em segundos para dia (W), hora (X), minutos (Y) e segundos (Z) restantes
            duracaoDia = duracao / (24 * 60 * 60);
            resto = duracao % (24 * 60 * 60);
            duracaoHora = resto / (60 * 60);
            resto = resto % (60 * 60);
            duracaoMinuto = resto / 60;
            duracaoSegundo = resto % 60;

            Console.WriteLine(W + " dia(s)");
            Console.WriteLine(X + " hora(s)");
            Console.WriteLine(Y + " minuto(s)");
            Console.WriteLine(Z + " segundo(s)");
    return 0;
}
