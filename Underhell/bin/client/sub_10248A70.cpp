int __thiscall sub_10248A70(int this, char a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ebx
  bool v6; // cc
  int v7; // ecx
  double v8; // st7
  int *v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  __int16 v13; // bp
  int v14; // eax
  int v15; // ecx
  int (__thiscall ***v16)(_DWORD); // eax
  _DWORD v17[2]; // [esp+Ch] [ebp-30h] BYREF
  int v18; // [esp+14h] [ebp-28h] BYREF
  int v19; // [esp+18h] [ebp-24h]
  int v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch]
  int v22; // [esp+24h] [ebp-18h] BYREF
  int v23[2]; // [esp+28h] [ebp-14h] BYREF
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]
  int v26; // [esp+38h] [ebp-4h]

  v2 = 0;
  result = 0;
  v5 = 0;
  v6 = *(_DWORD *)(this + 264) <= 0;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( !v6 )
  {
    do
    {
      v7 = *(_DWORD *)(this + 252);
      v8 = *(float *)(v7 + 20 * v2 + 12);
      v9 = (int *)(20 * v2 + v7);
      if ( v8 <= *(float *)(this + 208) || a2 )
      {
        v18 = *v9;
        v19 = v9[1];
        v20 = v9[2];
        v21 = v9[3];
        v10 = *(_DWORD *)(this + 264) - v2 - 1;
        v11 = *(_DWORD *)(this + 264) - v2 == 1;
        v22 = v9[4];
        if ( v10 >= 0 && !v11 )
          memcpy(
            (void *)(20 * v2 + *(_DWORD *)(this + 252)),
            (const void *)(20 * v2 + *(_DWORD *)(this + 252) + 20),
            20 * v10);
        v12 = v18;
        v2 = -1;
        --*(_DWORD *)(this + 264);
        switch ( v12 )
        {
          case 1:
            v13 = HIWORD(v19);
            LOWORD(v17[0]) = HIWORD(v19);
            v14 = sub_10237C80(&v22);
            v15 = 0;
            v17[1] = v14;
            if ( v5 <= 0 )
              goto LABEL_13;
            while ( *(_WORD *)(v23[0] + 8 * v15) != v13 || *(_DWORD *)(v23[0] + 8 * v15 + 4) != v14 )
            {
              if ( ++v15 >= v5 )
                goto LABEL_13;
            }
            if ( v15 < 0 )
            {
LABEL_13:
              sub_10246610(v23, v5, v17);
              sub_102489E0((void *)this, (int)&v18);
              v5 = v25;
            }
            break;
          case 2:
            v16 = (int (__thiscall ***)(_DWORD))sub_10237C80(&v22);
            sub_10246230((_DWORD *)this, SHIWORD(v19), v16);
            break;
          case 3:
            sub_102464E0((_DWORD *)this, (int)&v18);
            break;
          case 4:
            sub_10246420((_DWORD *)this, (int)&v18);
            break;
          case 5:
            sub_102446E0((void *)this, (int)&v18);
            break;
          case 6:
          case 7:
            sub_102447B0((void *)this, (unsigned __int16 *)&v18);
            break;
          default:
            break;
        }
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(this + 264) );
    result = v23[0];
  }
  if ( v24 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
