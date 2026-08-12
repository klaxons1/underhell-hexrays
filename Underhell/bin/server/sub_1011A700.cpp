void __thiscall sub_1011A700(_BYTE *this)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 100))(off_10627F88);
  if ( this[1268] )
  {
    sub_101194F0((int)this, 1);
  }
  else
  {
    sub_10118C00((int)this);
    dword_1069C05C = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
    dword_1069C060 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
  }
}
