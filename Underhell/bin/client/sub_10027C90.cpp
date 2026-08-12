int __thiscall sub_10027C90(_DWORD *this)
{
  int v1; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  v1 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  if ( (unsigned __int8)sub_10034D10(this) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 428))(this) )
    goto LABEL_10;
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = (_DWORD *)this[485];
  if ( v3 && *v3 && (v4 = sub_10001EA0(this), (unsigned __int8)sub_101282A0(v4)) )
  {
    sub_10025040(this);
  }
  else
  {
LABEL_10:
    sub_1003BDA0(this + 421, 0);
    sub_1003BDA0(this + 351, 0);
    sub_1003BDA0(this + 454, 0);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
}
