int __thiscall sub_100BBC40(_DWORD *this)
{
  float *v2; // eax
  float *v3; // eax

  v2 = (float *)sub_100DDA40(476);
  if ( v2 )
  {
    if ( this )
    {
      v3 = sub_100BBB30(v2, (int)(this + 11), "ChatLine1");
      this[78] = v3;
      return (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v3 + 124))(v3, 0);
    }
    else
    {
      MEMORY[0x138] = sub_100BBB30(v2, 0, "ChatLine1");
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*MEMORY[0x138] + 124))(MEMORY[0x138], 0);
    }
  }
  else
  {
    this[78] = 0;
    return (*(int (__thiscall **)(_DWORD, _DWORD))(MEMORY[0] + 124))(0, 0);
  }
}
