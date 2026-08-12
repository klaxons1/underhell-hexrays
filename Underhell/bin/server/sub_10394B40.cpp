void __thiscall sub_10394B40(_DWORD *this, char a2)
{
  int v3; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this)
    && a2
    && ((v3 = this[1332], v3 == 1) || v3 == 3) )
  {
    this[585] = 0;
  }
  else
  {
    sub_10025530((int)this, a2);
  }
}
