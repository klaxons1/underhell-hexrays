int __thiscall sub_100E2C30(float *this, int a2, float *a3, float *a4)
{
  int result; // eax
  int v5; // edx
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  float **v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  int v17; // [esp+4h] [ebp-1Ch] BYREF
  int v18; // [esp+8h] [ebp-18h]
  int v19; // [esp+Ch] [ebp-14h]
  int v20; // [esp+10h] [ebp-10h]
  int v21; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]
  float *v23; // [esp+1Ch] [ebp-4h]

  result = dword_10697378;
  v5 = dword_1069736C;
  v7 = 0;
  v23 = this;
  if ( dword_10697378 <= 0 )
    goto LABEL_6;
  while ( *(float **)(dword_1069736C + 4 * v7) != this )
  {
    if ( ++v7 >= dword_10697378 )
      goto LABEL_6;
  }
  if ( v7 < 0 )
  {
LABEL_6:
    v8 = dword_10697378;
    v22 = dword_10697378;
    if ( dword_10697378 + 1 > dword_10697370 )
    {
      sub_102ABFC0(dword_10697378 - dword_10697370 + 1);
      result = dword_10697378;
      v5 = dword_1069736C;
    }
    dword_10697378 = result + 1;
    v9 = result - v8;
    v10 = 0;
    dword_1069737C = v5;
    if ( v9 > 0 )
    {
      memcpy((void *)(v5 + 4 * v8 + 4), (const void *)(v5 + 4 * v8), 4 * v9);
      v5 = dword_1069736C;
    }
    v11 = (float **)(v5 + 4 * v8);
    if ( v11 )
      *v11 = this;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    sub_100E2B30((int)this, &v17);
    v12 = v20;
    v13 = 0;
    if ( v20 > 0 )
    {
      v14 = 0;
      do
      {
        sub_100E2940(v14 + v17, v23, a2, a3, a4);
        v12 = v20;
        ++v13;
        v14 += 28;
      }
      while ( v13 < v20 );
      v8 = v22;
      v10 = 0;
    }
    if ( v12 > 0 )
    {
      v15 = 0;
      do
      {
        sub_100E8D20(*(_DWORD *)(v15 + v17));
        ++v10;
        v15 += 28;
      }
      while ( v10 < v20 );
    }
    if ( dword_10697378 > 0 )
      *(_DWORD *)(dword_1069736C + 4 * v8) = *(_DWORD *)(dword_1069736C + 4 * dword_10697378-- - 4);
    v16 = (void *)sub_101C46F0(2);
    if ( v16 )
      memset(v16, 0, 0xACu);
    result = v17;
    v20 = 0;
    if ( v19 >= 0 )
    {
      if ( v17 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
        result = 0;
        v17 = 0;
      }
      v18 = 0;
    }
    v21 = result;
    if ( v19 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
