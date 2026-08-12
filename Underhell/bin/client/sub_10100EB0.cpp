void *__thiscall sub_10100EB0(int this, int a2, int a3)
{
  int v4; // edx
  void *result; // eax
  _DWORD v6[13]; // [esp+4h] [ebp-40h] BYREF
  _DWORD v7[3]; // [esp+38h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 60) )
  {
    if ( dword_10436254 )
    {
      v4 = *(_DWORD *)(this + 152);
      v7[2] = dword_1043624C;
      v7[1] = v4;
      v7[0] = 1;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_10436254 + 208))(dword_10436254, v7);
    }
    for ( result = memset(v6, 0, sizeof(v6));
          *(_DWORD *)(this + 148);
          result = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2) )
    {
      --*(_DWORD *)(this + 148);
      (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)a2 + 8))(a2, v6, &dword_103E1DB8);
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
      if ( v6[1] != -1 && *((_DWORD *)off_103DCD74 + 4 * (v6[1] & 0xFFF) + 2) == v6[1] >> 12 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (v6[1] & 0xFFF) + 1) )
          sub_10100B10((_WORD *)this, a2, v6);
      }
    }
    --*(_DWORD *)(this + 148);
  }
  return result;
}
