double __thiscall sub_1005BE50(int this, float *a2, int *a3)
{
  double result; // st7
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  bool v9; // c0
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( !*(_BYTE *)(this + 140) || *(_DWORD *)(dword_1042F8D4 + 48) )
  {
    v9 = sub_1005A5F0((int)&savedregs, a2, 1) > 0.0;
    result = 0.0;
    if ( v9 )
      return 1.0;
  }
  else if ( sub_10142330() >= 0 )
  {
    v5 = sub_1005BD70(this, (int)a2, a3);
    v6 = sub_10142330();
    v7 = 5 * (unsigned __int16)sub_1005B6A0(this, v5, v6);
    v8 = *(_DWORD *)(this + 68);
    v7 *= 8;
    *(float *)(v8 + v7) = *a2;
    *(float *)(v8 + v7 + 4) = a2[1];
    *(float *)(v8 + v7 + 8) = a2[2];
    result = sub_1005AA30(v7 + *(_DWORD *)(this + 68), *(float *)(v5 + 8));
    *(_DWORD *)(v5 + 20) = *((_DWORD *)off_103DC81C + 1);
  }
  else
  {
    return 0.0;
  }
  return result;
}
