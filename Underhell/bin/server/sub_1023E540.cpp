int __thiscall sub_1023E540(float *this, int a2, int a3, int a4, char *a5, int a6)
{
  char *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int result; // eax
  char *v14; // [esp-Ch] [ebp-B8h]
  int v15; // [esp+8h] [ebp-A4h] BYREF
  float v16; // [esp+Ch] [ebp-A0h]
  int v17; // [esp+10h] [ebp-9Ch]
  int v18; // [esp+14h] [ebp-98h]
  int v19; // [esp+18h] [ebp-94h]
  int v20; // [esp+1Ch] [ebp-90h]
  char v21; // [esp+20h] [ebp-8Ch]
  int v22; // [esp+24h] [ebp-88h]
  char v23; // [esp+28h] [ebp-84h] BYREF
  int v24; // [esp+A8h] [ebp-4h]

  if ( a3 )
    this[13] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    this[13] = NAN;
  v16 = 1.0;
  v7 = a5;
  v14 = a5;
  *((_DWORD *)this + 14) = a4;
  v15 = 0;
  v17 = 100;
  v18 = 100;
  v19 = 100;
  v20 = 75;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  if ( sub_10429530(v14, ".wav") || sub_10429530(v7, ".mp3") || !(unsigned __int8)sub_1023A760((int)v7, (int)&v15, 0) )
  {
    v11 = *sub_10162BE0(&a3, v7);
    this[18] = 1.0;
    v12 = a6;
    *((_DWORD *)this + 12) = v11;
    *((_DWORD *)this + 8) = v12;
  }
  else
  {
    this[18] = v16;
    v8 = *sub_10162BE0(&a3, v7);
    v9 = v20;
    v10 = v15;
    *((_DWORD *)this + 12) = v8;
    v7 = &v23;
    *((_DWORD *)this + 8) = v9;
    *((_DWORD *)this + 14) = v10;
  }
  this[11] = *(float *)sub_10162BE0(&a3, v7);
  if ( 0.0 != this[5] )
    *((_BYTE *)this + 28) = 1;
  this[5] = 0.0;
  this[4] = 0.0;
  this[6] = 0.0;
  if ( 0.0 != this[1] )
    *((_BYTE *)this + 12) = 1;
  this[1] = 0.0;
  *this = 0.0;
  this[2] = 0.0;
  this[9] = 0.0;
  this[17] = 0.0;
  this[10] = 0.0;
  result = sub_1023E390((_DWORD *)this + 19, a2);
  this[16] = 0.0;
  return result;
}
