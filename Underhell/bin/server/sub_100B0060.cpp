int __thiscall sub_100B0060(int this, const char *a2, int a3, char a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v9; // ecx
  int result; // eax
  int v11; // edi
  int *v12; // ecx
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  int *v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h] BYREF
  int *v16; // [esp+1Ch] [ebp-4h]
  int *v17; // [esp+2Ch] [ebp+Ch]

  if ( !a2 )
    goto LABEL_5;
  *(float *)&v13[1] = -1.0;
  v14 = 0;
  v13[0] = a2;
  v5 = sub_100ADBC0((unsigned __int8 (__cdecl **)(int, int))(this + 8), (int)v13);
  if ( v14 )
  {
    v16 = v14;
    sub_10068150(v14);
    sub_10184660(v16);
  }
  v14 = 0;
  v6 = v5;
  if ( v5 == -1 )
  {
LABEL_5:
    v15 = *(float *)(dword_106B31C8 + 12);
    v16 = 0;
    v6 = sub_100AFE20((void *)(this + 8), a2, (int)&v15);
  }
  v7 = *(_DWORD *)(this + 12);
  v9 = 7 * v6;
  result = dword_106B31C8;
  v11 = v7 + 4 * v9 + 20;
  *(float *)v11 = *(float *)(dword_106B31C8 + 12);
  if ( a3 )
  {
    v12 = *(int **)(v7 + 4 * v9 + 24);
    v17 = v12;
    if ( v12 )
    {
      sub_10068150(v12);
      result = sub_10184660(v17);
    }
    *(_DWORD *)(v11 + 4) = a3;
  }
  if ( a4 )
    return (***(int (__thiscall ****)(_DWORD, const char *, int))(this + 4))(*(_DWORD *)(this + 4), a2, a3);
  return result;
}
