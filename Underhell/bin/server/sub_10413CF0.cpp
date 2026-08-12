char __thiscall sub_10413CF0(int this, int a2)
{
  __int16 v3; // ax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
    && (**(int (__thiscall ***)(int))(this + 1484))(this + 1484) )
  {
    LOBYTE(v3) = 1;
  }
  else
  {
    return *(_WORD *)(this + 258) & 1;
  }
  return v3;
}
