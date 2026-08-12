int __thiscall sub_10259A00(int *this, float a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  double v7; // st7
  int result; // eax
  int v9; // edx
  char v10; // al
  __int16 v11; // cx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  double v17; // st7
  int v18; // eax
  _DWORD v19[2]; // [esp+Ch] [ebp-20h] BYREF
  char v20; // [esp+14h] [ebp-18h]
  __int16 v21; // [esp+16h] [ebp-16h]
  int v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  v4 = this[69];
  v5 = this[66];
  v4 *= 32;
  v6 = v4 + v5 - 32;
  if ( *(_DWORD *)(v4 + v5 - 4) == this[59] )
  {
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 20))(dword_1047CA80);
    result = *(unsigned __int8 *)(v6 + 3);
    *(_DWORD *)(v6 + 24) = result;
    *(float *)(v6 + 12) = v7 + a2;
    *(float *)(v6 + 20) = a2;
    *(float *)(v6 + 16) = a3;
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 4);
    v10 = *(_BYTE *)(v6 + 8);
    v19[0] = *(_DWORD *)v6;
    v11 = *(_WORD *)(v6 + 10);
    v19[1] = v9;
    v12 = *(_DWORD *)(v6 + 12);
    v21 = v11;
    v13 = *(_DWORD *)(v6 + 20);
    v20 = v10;
    v14 = *(_DWORD *)(v6 + 16);
    v22 = v12;
    v15 = *(_DWORD *)(v6 + 24);
    v24 = v13;
    v23 = v14;
    v16 = *(_DWORD *)dword_1047CA80;
    v25 = v15;
    v17 = ((double (__thiscall *)(int))*(_DWORD *)(v16 + 20))(dword_1047CA80);
    *(_DWORD *)(v6 + 24) = *(unsigned __int8 *)(v6 + 3);
    *(float *)(v6 + 12) = v17 + a2;
    *(float *)(v6 + 16) = a3;
    *(float *)(v6 + 20) = a2;
    v18 = this[69];
    v26 = this[59];
    return sub_10258BB0(this + 66, v18, (int)v19);
  }
  return result;
}
