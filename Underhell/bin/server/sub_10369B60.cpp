char __thiscall sub_10369B60(_DWORD *this, float *a2, float a3, char a4)
{
  _DWORD *v5; // edi
  int v7; // ecx
  char v8; // bl
  int v9[19]; // [esp+10h] [ebp-88h] BYREF
  _DWORD v10[12]; // [esp+5Ch] [ebp-3Ch] BYREF
  float v11[3]; // [esp+8Ch] [ebp-Ch] BYREF

  sub_10072560(v9);
  sub_10070FE0(v9, 450);
  sub_1042C170(2);
  sub_10072770(v9, a2, a3);
  if ( a4 )
    sub_10072790(v9, a2, 128.0);
  v5 = (_DWORD *)sub_10072EE0((int)this, v9);
  if ( v5 )
  {
    sub_10044830(this, 0.0);
    sub_100448D0(this, (int)v5);
    sub_10070B10(v5, (int)this);
    sub_10070340((int)v5, (int)this, v11);
    *(float *)&v10[8] = -1.0;
    *(float *)&v10[9] = -1.0;
    *(float *)&v10[1] = v11[0];
    *(float *)&v10[2] = v11[1];
    *(float *)&v10[3] = v11[2];
    v7 = this[647];
    v10[4] = -1;
    v10[6] = -1;
    v10[7] = -1;
    v10[11] = dword_10673A34;
    v10[0] = 4;
    v10[5] = 11;
    v10[10] = 0;
    v8 = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v7 + 20))(v7, v10, 0);
    sub_100725D0(v9);
    return v8;
  }
  else
  {
    sub_100725D0(v9);
    return 0;
  }
}
