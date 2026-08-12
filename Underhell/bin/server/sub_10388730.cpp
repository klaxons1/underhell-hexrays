void __thiscall sub_10388730(int this, int a2, int a3)
{
  float v4; // [esp+4h] [ebp-10h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 3732) + 76))(this - 3732, 0);
  *(_BYTE *)(this + 162) = 0;
  if ( a3 == 3 )
  {
    if ( a2 )
      *(_DWORD *)(this + 104) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(this + 104) = -1;
    *(float *)(this + 108) = *(float *)(dword_106B31C8 + 12);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_100EC4A0((int *)(this - 3732), v4, 0);
    *(float *)(this + 72) = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_10387600(this - 3732, 3);
  }
  else
  {
    if ( *(_BYTE *)(this + 163) && !(*(int (__thiscall **)(int))(*(_DWORD *)(this - 3732) + 368))(this - 3732) )
    {
      if ( (*(_DWORD *)(this - 3480) & 0x800) != 0 )
        sub_100DAE60(this - 3732);
      sub_10383780(this - 3732, this - 3152);
    }
    *(_DWORD *)(this + 104) = -1;
    *(float *)(this + 108) = 0.0;
  }
}
