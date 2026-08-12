int __thiscall sub_10181630(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  int result; // eax

  this[66] = a2;
  this[67] = a3;
  v4 = sub_100DDA40(428);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    sub_10250100(v4, 0, "ViewPortBackGround", 1);
    *v5 = &CBaseViewport::CBackGroundPanel::`vftable';
    sub_10236910("ClientScheme");
    sub_1024F400(0);
    sub_1024E300(0);
    sub_1024E310(0);
    sub_1023A780(1);
    v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  this[68] = v6;
  sub_102366C0(-20);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[68] + 124))(this[68], 0);
  (*(void (__thiscall **)(_DWORD *))(*this + 876))(this);
  result = (*(int (__thiscall **)(_DWORD, _DWORD *, const char *, _DWORD))(*(_DWORD *)this[67] + 12))(
             this[67],
             this + 64,
             "game_newmap",
             0);
  *((_BYTE *)this + 297) = 1;
  return result;
}
