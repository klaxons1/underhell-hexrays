int __thiscall sub_10220760(void *this, int a2)
{
  int (__thiscall *v3)(int); // edx
  int v4; // edi
  int result; // eax
  int v6; // esi
  unsigned int v7; // eax
  int *v8; // ecx
  _DWORD *v9; // edi
  void (*v10)(void); // edx
  int v11; // eax
  float *v12; // eax
  int v13; // edi
  int v14; // eax
  float v15[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v16; // [esp+14h] [ebp-10h]
  void *v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  int v19; // [esp+20h] [ebp-4h]
  int v20; // [esp+2Ch] [ebp+8h]

  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 188);
  v17 = this;
  v4 = v3(a2);
  result = 0;
  v20 = v4;
  v18 = 0;
  if ( *(int *)(v4 + 1372) > 0 )
  {
    v19 = 0;
    do
    {
      v6 = v19 + *(_DWORD *)(v4 + 1376);
      *(_DWORD *)(v6 + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      *(_DWORD *)(v6 + 24) = 0;
      v7 = *(_DWORD *)(v6 + 16);
      if ( v7 != -1 )
      {
        v8 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 16) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(v6 + 16) & 0xFFF) + 2] == v7 >> 12 )
        {
          v9 = (_DWORD *)*v8;
          if ( *v8 && (*(int (__thiscall **)(int))(*v9 + 144))(*v8) >= 0 )
          {
            v10 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
            v16 = dword_10700AC8;
            v10();
            *(_DWORD *)(v20 + 1380) = v9;
            (*(void (__thiscall **)(_DWORD *, int))(*v9 + 168))(v9, a2);
            *(_DWORD *)(v20 + 1380) = 0;
            *(_DWORD *)(v6 + 24) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) - *(_DWORD *)(v6 + 20);
            *(_DWORD *)(v6 + 32) = v9[23];
            *(_DWORD *)(v6 + 36) = v9[24];
            v11 = (*(int (__thiscall **)(_DWORD *))(*v9 + 24))(v9);
            v12 = sub_1021E110(v15, v11);
            *(float *)(v6 + 40) = *v12;
            *(float *)(v6 + 44) = v12[1];
            *(float *)(v6 + 48) = v12[2];
            v13 = v9[6];
            if ( v13 )
            {
              v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v13);
              if ( v14 >= 1 && v14 <= *(_DWORD *)(dword_106B31C8 + 20) )
                *(_DWORD *)(v6 + 28) |= 0x80000000;
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
          }
          v4 = v20;
        }
      }
      v19 += 56;
      result = v18 + 1;
      v18 = result;
    }
    while ( result < *(_DWORD *)(v4 + 1372) );
  }
  return result;
}
