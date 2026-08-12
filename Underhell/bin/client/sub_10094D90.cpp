void *__thiscall sub_10094D90(void *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  if ( (dword_1042CC2C & 1) == 0 )
    dword_1042CC2C |= 1u;
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  sub_101F0B70(v2, v4, &unk_1042CBFC);
  return &unk_1042CBFC;
}
