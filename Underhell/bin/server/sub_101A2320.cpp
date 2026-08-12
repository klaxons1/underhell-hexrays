void __thiscall sub_101A2320(_DWORD *this)
{
  if ( (this[581] != 1
     || 0.0 != ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.0,
                 1.0))
    && !(unsigned __int8)sub_1032E9B0(this) )
  {
    sub_1023C380((int)"NPC_Butcher.Idle", 0.0, 0);
    sub_1032C950((int)this, 360.0, 0.5);
  }
}
