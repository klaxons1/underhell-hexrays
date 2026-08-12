int __thiscall sub_101810C0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int result; // eax

  sub_10239490(a2, a3);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 884))(this, 0);
  (*(void (__thiscall **)(_DWORD *))(*this + 868))(this);
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
  ((void (__thiscall *)(int (__stdcall ***)(char)))(*off_103E7198)[3])(off_103E7198);
  v7 = dword_1047CA70;
  v8 = *(_DWORD *)dword_1047CA70;
  v9 = (**(int (__thiscall ***)(_DWORD))this[68])(this[68]);
  (*(void (__thiscall **)(int, int))(v8 + 84))(v7, v9);
  (*(void (__thiscall **)(_DWORD *, void *, _DWORD))(this[63] + 8))(this + 63, &unk_10328618, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *, const char *, int))(this[63] + 8))(this + 63, "specgui", 1);
  return result;
}
