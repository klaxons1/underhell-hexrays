_DWORD *__thiscall sub_1015E370(_DWORD *this)
{
  int (__stdcall ***v3)(char); // [esp-8h] [ebp-Ch]
  int v4; // [esp-4h] [ebp-8h]

  sub_10170500("CGameRules");
  *this = &CGameRules::`vftable';
  dword_106B3CDC = (int)this;
  v4 = *(_DWORD *)(dword_106B31C8 + 20);
  v3 = off_10665C68;
  sub_10272250();
  sub_10272260(v3, v4);
  sub_10247FD0();
  return this;
}
