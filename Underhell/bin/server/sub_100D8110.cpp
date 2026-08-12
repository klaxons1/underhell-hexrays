int __usercall sub_100D8110@<eax>(float *a1@<ebx>, int a2, int a3, float *a4)
{
  int v4; // edi
  int v5; // esi
  unsigned __int8 (__thiscall *v6)(int); // edx
  int v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // ecx
  double v11; // st7
  double v12; // st7
  float v15[3]; // [esp+8h] [ebp-20h] BYREF
  float v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  _DWORD *v19; // [esp+20h] [ebp-8h]
  char v20; // [esp+27h] [ebp-1h]

  v4 = a2;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 316))(a2);
  v16 = 0.0;
  v6 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4);
  v18 = 0;
  if ( v6(v5) )
  {
    do
    {
      v7 = (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)v5 + 8))(v5, 1, a1);
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 68))(v7);
      v8 = *(_DWORD *)(a3 + 28);
      v9 = 0;
      v20 = 0;
      if ( v8 > 0 )
      {
        v19 = (_DWORD *)(a3 + 32);
        while ( 1 )
        {
          v10 = *v19 == -1 || off_1061BE18[4 * (*v19 & 0xFFF) + 2] != *v19 >> 12
              ? 0
              : off_1061BE18[4 * (*v19 & 0xFFF) + 1];
          if ( v17 == v10 )
            break;
          ++v19;
          if ( ++v9 >= v8 )
            goto LABEL_12;
        }
        v20 = 1;
      }
LABEL_12:
      a1 = v15;
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
      v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 24))(v5);
      v12 = v15[0] * v11 * *a4 + v11 * v15[1] * a4[1] + v11 * v15[2] * a4[2];
      if ( !v18 || !v20 && v16 < v12 )
      {
        v18 = v17;
        if ( !v20 )
          v16 = v12;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
    }
    while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) );
    v4 = a2;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 320))(v4, v5);
  return v18;
}
