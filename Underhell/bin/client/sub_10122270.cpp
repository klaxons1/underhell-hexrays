int __thiscall sub_10122270(float *this, int a2, int a3, int a4, char *a5, int a6)
{
  char *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  int v12; // [esp+8h] [ebp-A4h] BYREF
  float v13; // [esp+Ch] [ebp-A0h]
  int v14; // [esp+10h] [ebp-9Ch]
  int v15; // [esp+14h] [ebp-98h]
  int v16; // [esp+18h] [ebp-94h]
  int v17; // [esp+1Ch] [ebp-90h]
  char v18; // [esp+20h] [ebp-8Ch]
  int v19; // [esp+24h] [ebp-88h]
  char v20; // [esp+28h] [ebp-84h] BYREF
  int v21; // [esp+A8h] [ebp-4h]

  if ( a3 )
    this[13] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    this[13] = NAN;
  v13 = 1.0;
  v7 = a5;
  *((_DWORD *)this + 14) = a4;
  v12 = 0;
  v14 = 100;
  v15 = 100;
  v16 = 100;
  v17 = 75;
  v20 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  if ( sub_10227EE0(a5, ".wav") || sub_10227EE0(a5, ".mp3") || !(unsigned __int8)sub_10120700((int)a5, (int)&v12, 0) )
  {
    v10 = sub_100AF260(a5);
    this[18] = 1.0;
    *((_DWORD *)this + 12) = v10;
    *((_DWORD *)this + 8) = a6;
  }
  else
  {
    this[18] = v13;
    v8 = sub_100AF260(a5);
    v9 = v12;
    *((_DWORD *)this + 12) = v8;
    v7 = &v20;
    *((_DWORD *)this + 8) = v17;
    *((_DWORD *)this + 14) = v9;
  }
  *((_DWORD *)this + 11) = sub_100AF260(v7);
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
  result = sub_101220C0((_DWORD *)this + 19, a2);
  this[16] = 0.0;
  return result;
}
