void __thiscall sub_10366640(int *this, int a2, int a3)
{
  double v5; // st7
  double v6; // st7
  _DWORD v7[20]; // [esp+20h] [ebp-6Ch] BYREF
  int v8[3]; // [esp+70h] [ebp-1Ch] BYREF
  int v9[3]; // [esp+7Ch] [ebp-10h] BYREF
  int v10; // [esp+88h] [ebp-4h] BYREF
  int v11; // [esp+98h] [ebp+Ch]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(this[958] + 24))(this + 958) && this[962] )
  {
    v10 = 0;
    v5 = sub_101C01F0(a2, a3, (int)&off_1065F4F4, 1.0, 1, &v10, 0);
    *(float *)&v11 = v5;
    if ( v5 > 0.0 )
    {
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a3 + 28) + 4))(*(_DWORD *)(a3 + 28), v8);
      v6 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a3 + 4 * a2) + 116))(*(_DWORD *)(a3 + 4 * a2));
      *(float *)v9 = *(float *)(a3 + 12 * a2 + 56) * v6;
      *(float *)&v9[1] = *(float *)(a3 + 12 * a2 + 60) * v6;
      *(float *)&v9[2] = v6 * *(float *)(a3 + 12 * a2 + 64);
      sub_102487B0((int)v7, (int)this, (int)this, (float *)v9, (float *)v8, *(float *)&v11, v10 | 0x10, 0, 0);
      sub_100D9E70(this, (int)this, v7);
    }
  }
  else
  {
    sub_100DA500(this, a2, a3);
  }
}
