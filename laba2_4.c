#include <stdio.h>
#include <math.h>

int main(){
    double stoim_kv, nach_vz, proc_st, sum_kredit;
    int years;
    printf("Введите стоимость квартиры:");
    scanf("%lf",&stoim_kv);
    printf("Введите начальный взнос:");
    scanf("%lf",&nach_vz);
    printf("Введите число лет ипотеки:");
    scanf("%d",&years);
    printf("Введите процентную ставку:");
    scanf("%lf",&proc_st);
    
    sum_kredit = stoim_kv - nach_vz;

    double monthlyRate = (proc_st / 100) / 12;
    int total = years * 12;
    
    //Аннуитетный платеж(когда одна сумма выплат каждый месяц)
    double monthlyPayment = (sum_kredit * monthlyRate) / (1 - pow(1 + monthlyRate, -total));
    
    double totalPaid = monthlyPayment * total;
    
    printf("Ежемесячный платеж: %.2f\n", monthlyPayment);
    printf("Общая сумма выплат: %.2f\n", totalPaid);
    
    printf("Платежи по годам:\n");
    
    for (int year = 1; year <= years; year++) {
        double yearlyPayment = monthlyPayment * 12; // Годовой платеж
        printf("Год %d: %.2f\n", year, yearlyPayment);
    }

    return 0;
}
    



