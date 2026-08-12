char __thiscall sub_1036BC70(_DWORD *this, float *a2)
{
  int v3; // ebx
  float *v4; // eax
  _BYTE v6[44]; // [esp+Ch] [ebp-64h] BYREF
  float v7; // [esp+38h] [ebp-38h]
  char v8; // [esp+42h] [ebp-2Eh]
  char v9; // [esp+43h] [ebp-2Dh]
  _DWORD *v10; // [esp+58h] [ebp-18h]
  float v11[3]; // [esp+60h] [ebp-10h] BYREF
  float *v12; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  v3 = this[105];
  v12 = (float *)sub_10073730(this[419]);
  v4 = (float *)sub_10073710(this[419]);
  v11[0] = *a2;
  v11[1] = a2[1];
  v11[2] = a2[2] + 1.0;
  sub_100231A0((int)&savedregs, (int)this, a2, v11, v4, v12, 33701899, (int)this, v3, (int)v6);
  if ( !v9 && !v8 && v7 >= 1.0 )
    return 1;
  if ( v10 && v10[106] && !(*(int (**)(void))(*v10 + 340))() )
    sub_1036A900(this, a2);
  return 0;
}
