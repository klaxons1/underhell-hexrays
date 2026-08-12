// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10037980(
        unsigned __int16 *a1@<ecx>,
        float a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10)
{
  double v11; // st7
  int v12; // edi
  float *v13; // eax
  float v15[22]; // [esp-70h] [ebp-7Ch] BYREF
  float v16[3]; // [esp-18h] [ebp-24h] BYREF
  float v17[6]; // [esp-Ch] [ebp-18h] BYREF
  float retaddr; // [esp+Ch] [ebp+0h]

  v17[3] = a2;
  v17[4] = retaddr;
  if ( a8 )
  {
    (*(void (__thiscall **)(int, float *, int, unsigned __int16 *, int))(*(_DWORD *)dword_104131A0 + 8))(
      dword_104131A0,
      a5,
      1174421507,
      a1,
      a9);
    if ( 1.0 == *(float *)(a9 + 44) )
      return;
    *(_DWORD *)(a9 + 76) = a1;
  }
  if ( *(_DWORD *)(dword_10404CA4 + 48) )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int, int))(*((_DWORD *)a1 + 1) + 128))(a1 + 2, a3, a4);
    v17[0] = 0.0;
    v17[1] = 0.0;
    v17[2] = 1.0;
    if ( !a8
      || (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)a1 + 276))(a1) != 6
      || *(_BYTE *)(a9 + 55)
      || *(_BYTE *)(a9 + 54) )
    {
      v12 = *(_DWORD *)dword_10413160;
      LODWORD(v15[0]) = (*(int (__thiscall **)(unsigned __int16 *, _DWORD, int))(*(_DWORD *)a1 + 580))(a1, 0, a10);
      v13 = a5;
    }
    else
    {
      v11 = *(float *)(a9 + 12) - *(float *)(a9 + 24);
      LODWORD(v15[2]) = v16;
      LODWORD(v15[1]) = a9 + 12;
      v16[0] = v11;
      v16[1] = *(float *)(a9 + 16) - *(float *)(a9 + 28);
      v16[2] = *(float *)(a9 + 20) - *(float *)(a9 + 32);
      sub_1000E430(v15, (float *)(a9 + 12), v16);
      v12 = *(_DWORD *)dword_10413160;
      LODWORD(v15[0]) = (*(int (__thiscall **)(unsigned __int16 *, int, int))(*(_DWORD *)a1 + 580))(a1, 1, a10);
      v13 = v15;
    }
    (*(void (__thiscall **)(int, _DWORD, float *, float *, int, _DWORD))(v12 + 32))(
      dword_10413160,
      a1[150],
      v13,
      v17,
      a7,
      LODWORD(v15[0]));
  }
}
