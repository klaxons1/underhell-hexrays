void __thiscall sub_10256750(int this, int a2, int a3)
{
  __int16 v3; // bx
  int v5; // edi
  int v6; // eax
  int v7; // [esp-8h] [ebp-14h]

  v3 = a2;
  if ( (_WORD)a2 == 10 || !(_WORD)a2 )
  {
    *(_DWORD *)(this + 396) = 0;
    *(_DWORD *)(this + 272) = 0;
    v7 = *(_DWORD *)(this + 272);
    a2 = 999999;
    sub_100C2010((int *)(this + 260), v7, &a2);
  }
  v5 = a3;
  if ( a3 >= 0 )
  {
    v6 = *(_DWORD *)(this + 232);
    if ( a3 >= v6 )
      sub_10255490((int *)(this + 220), *(_DWORD *)(this + 232), a3 - v6 + 1, 0);
    *(_WORD *)(*(_DWORD *)(this + 220) + 2 * v5) = v3;
    *(_BYTE *)(this + 340) = 1;
  }
}
