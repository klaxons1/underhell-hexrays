int __thiscall sub_10130970(_DWORD *this)
{
  int i; // esi
  bool v2; // zf
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  int v7; // edx
  float v9; // [esp+18h] [ebp-20h] BYREF
  float v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  _DWORD *v13; // [esp+2Ch] [ebp-Ch]
  int v14; // [esp+30h] [ebp-8h]
  int v15; // [esp+34h] [ebp-4h]

  v13 = this;
  for ( i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041316C + 44))(dword_1041316C);
        i;
        i = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041316C + 48))(dword_1041316C, i) )
  {
    if ( i != -28 )
    {
      v2 = *(_BYTE *)(i + 12) == 0;
      v3 = *(_DWORD *)(i + 564);
      v4 = *(_DWORD *)(i + 552);
      v5 = *(_DWORD *)(i + 556);
      v14 = *(_DWORD *)(i + 560);
      v15 = v3;
      v6 = *(_DWORD *)dword_1041316C;
      if ( v2 )
      {
        if ( !(*(int (__stdcall **)(_DWORD, _DWORD, float *))(v6 + 36))(*(float *)(i + 20), *(float *)(i + 24), &v9) )
        {
          v11 = *(_DWORD *)dword_1047CA64;
          v12 = 13 * *(_DWORD *)(i + 16);
          (*(void (__cdecl **)(int, _DWORD, int, int, int, int, int, int, int))(v11 + 536))(
            dword_1047CA64,
            v13[51],
            (int)v9,
            (int)((double)v12 + v10),
            v4,
            v5,
            v14,
            v15,
            i + 28);
        }
      }
      else if ( !(*(int (__stdcall **)(int, float *))(v6 + 40))(i, &v9) )
      {
        v7 = v14;
        v12 = *(_DWORD *)dword_1047CA64;
        v14 = 13 * *(_DWORD *)(i + 16);
        (*(void (__cdecl **)(int, _DWORD, int, int, int, int, int, int, int))(v12 + 536))(
          dword_1047CA64,
          v13[51],
          (int)v9,
          (int)((double)v14 + v10),
          v4,
          v5,
          v7,
          v15,
          i + 28);
      }
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041316C + 52))(dword_1041316C);
}
