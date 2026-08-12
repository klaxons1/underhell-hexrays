void __thiscall sub_1035DF20(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  float *v5; // esi
  float *v6; // eax
  _BYTE v7[44]; // [esp+8h] [ebp-60h] BYREF
  float v8; // [esp+34h] [ebp-34h]
  _BYTE v9[12]; // [esp+5Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_3:
      *(_DWORD *)(this + 2608) = -1;
LABEL_4:
      sub_10023CB0((char *)this, 75);
      sub_10023CB0((char *)this, 25);
      return;
    }
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  if ( !v4 || !*v4 )
    goto LABEL_3;
  v5 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  if ( !v5 )
    goto LABEL_4;
  if ( ((_DWORD)v5[63] & 0x800) != 0 )
    sub_100DAE60((int)v5);
  v6 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v9);
  sub_1002A5F0((int)&savedregs, (int)v5, v6, v5 + 145, 33701899, this, 0, (int)v7);
  if ( 1.0 == v8 )
  {
    *(_DWORD *)(this + 2608) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 8))(v5);
    goto LABEL_4;
  }
}
