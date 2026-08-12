char __thiscall sub_1008F940(int this, char a2, __int16 *a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // edi
  float *v14; // eax
  float *v15; // [esp-10h] [ebp-30h]
  float v16[3]; // [esp+4h] [ebp-1Ch] BYREF
  float v17[3]; // [esp+10h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-4h]
  int v19; // [esp+2Ch] [ebp+Ch]

  if ( *(_BYTE *)(this + 16) )
    return 0;
  if ( (a3[7] & 1) == 0 )
    return 0;
  if ( *((float *)a3 + 4) <= (double)*(float *)(dword_106B31C8 + 12)
    && *(float *)(this + 12) != *(float *)(dword_106B31C8 + 12) )
  {
    v6 = *(_DWORD *)(this + 4);
    *(float *)(this + 12) = *(float *)(dword_106B31C8 + 12);
    v7 = *(_DWORD *)(v6 + 1676);
    v8 = a3[1];
    v19 = v7;
    v9 = *(_DWORD *)(this + 20);
    if ( v8 < 0 || v8 >= *(_DWORD *)(v9 + 4) )
    {
      ++dword_10691DE0;
      v10 = 0;
    }
    else
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * v8);
    }
    v18 = *(_DWORD *)(*(_DWORD *)(this + 4) + 1676);
    v11 = *a3;
    v12 = *(_DWORD *)(this + 20);
    if ( v11 < 0 || v11 >= *(_DWORD *)(v12 + 4) )
    {
      ++dword_10691DE0;
      v13 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4 * v11);
    }
    v15 = sub_1008D160(v10, v17, v19);
    v14 = sub_1008D160(v13, v16, v18);
    if ( sub_1008F830((_DWORD *)this, v14, v15, a2) )
    {
      *((_BYTE *)a3 + 14) &= ~1u;
      return 0;
    }
    *((float *)a3 + 4) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
  return 1;
}
