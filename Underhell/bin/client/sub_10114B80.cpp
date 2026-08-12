float *__cdecl sub_10114B80(int *a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  _BYTE *v6; // ebx
  int v7; // esi
  int v8; // eax
  float *v9; // ecx
  int v10; // esi
  _BYTE v11[12]; // [esp+4h] [ebp-38h] BYREF
  _BYTE v12[12]; // [esp+10h] [ebp-2Ch] BYREF
  _BYTE v13[12]; // [esp+1Ch] [ebp-20h] BYREF
  _BYTE v14[12]; // [esp+28h] [ebp-14h] BYREF
  int v15; // [esp+34h] [ebp-8h]
  _BYTE *v16; // [esp+38h] [ebp-4h]
  _DWORD *v17; // [esp+48h] [ebp+Ch]
  float *v18; // [esp+4Ch] [ebp+10h]
  int v19; // [esp+50h] [ebp+14h]

  result = a2;
  *a3 = *a2;
  v18 = 0;
  a3[1] = a2[1];
  a3[2] = a2[2];
  *a4 = *a2;
  a4[1] = a2[1];
  a4[2] = a2[2];
  if ( *a1 > 0 )
  {
    v6 = (_BYTE *)(v12 - (_BYTE *)a3);
    v16 = (_BYTE *)(v11 - (_BYTE *)a3);
    v15 = (char *)a4 - (char *)a3;
    v17 = a1 + 6;
    do
    {
      v7 = *v17;
      (*(void (__thiscall **)(_DWORD, _BYTE *, _BYTE *))(*(_DWORD *)*v17 + 188))(*v17, v13, v14);
      v19 = *(_DWORD *)dword_10436250;
      v8 = (*(int (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v7 + 292))(v7, v13, v14);
      (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(v19 + 92))(dword_10436250, v11, v12, v8);
      v9 = a3;
      v10 = 3;
      do
      {
        if ( *v9 > (double)*(float *)((char *)v9 + (_DWORD)v16) )
          *v9 = *(float *)((char *)v9 + (_DWORD)v16);
        if ( *(float *)((char *)v9 + v15) < (double)*(float *)((char *)v9 + (_DWORD)v6) )
          *(float *)((char *)v9 + v15) = *(float *)((char *)v9 + (_DWORD)v6);
        ++v9;
        --v10;
      }
      while ( v10 );
      v17 += 6;
      result = (float *)((char *)v18 + 1);
      v18 = result;
    }
    while ( (int)result < *a1 );
  }
  return result;
}
