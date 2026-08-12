int __cdecl sub_10262220(int a1)
{
  int v1; // ebx
  int v2; // eax
  bool v3; // zf
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  float *v11; // eax
  int v12; // eax
  _BYTE v14[12]; // [esp+Ch] [ebp-18h] BYREF
  float v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 < 1 )
    v1 = 1;
  v2 = *(_DWORD *)(dword_106B31C8 + 20);
  v3 = v1 == v2;
  if ( v1 > v2 )
  {
    v1 = *(_DWORD *)(dword_106B31C8 + 20);
    v3 = 1;
  }
  v4 = 1;
  if ( !v3 )
    v4 = v1 + 1;
  while ( 1 )
  {
    if ( v4 > *(_DWORD *)(dword_106B31C8 + 20) )
      v4 = 1;
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v4);
    v6 = v5;
    if ( v5 )
    {
      if ( v4 == v1 )
        goto LABEL_16;
      v7 = *(_DWORD *)(v5 + 12);
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
        if ( v8 )
        {
          if ( (*(_DWORD *)(v8 + 256) & 0x8000) == 0 )
            break;
        }
      }
    }
    ++v4;
  }
  memset(&unk_106CA0C4, 0, 0x2000u);
  byte_106CC0D0 = 0;
LABEL_16:
  v9 = *(_DWORD *)(v6 + 12);
  if ( v9 )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    if ( v10 )
    {
      v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 504))(v10, v14);
      v15[0] = *v11;
      v15[1] = v11[1];
      v15[2] = v11[2];
      v12 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_106B31D0 + 44))(dword_106B31D0, v15);
      if ( v12 != dword_106CC0C4 )
      {
        dword_106CC0C4 = v12;
        (*(void (__thiscall **)(int, int, int, void *))(*(_DWORD *)dword_106B31D0 + 48))(
          dword_106B31D0,
          v12,
          0x2000,
          &unk_106C80C4);
      }
    }
  }
  return v4;
}
