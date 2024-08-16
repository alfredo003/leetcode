int singleNumber(int* nums, int numsSize) {

    int i =0;
    int res = 0;
    while(numsSize > i)
    {
        res = res ^ nums[i];
        i++;
    }
    return(res);
}

/*
Essas propriedades permitem que o XOR(^) "cancelamento" funcione da seguinte forma:

Se um número aparece duas vezes, o XOR(^) entre essas duas ocorrências será 0 (porque a \oplus a = 0a⊕a=0).
O XOR de qualquer número com 0 é o próprio número, então qualquer número que não tem um par para cancelar será o resultado final após o loop.
*/
