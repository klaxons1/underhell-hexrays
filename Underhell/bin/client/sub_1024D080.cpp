int __thiscall sub_1024D080(int this, int a2, char *Source, int a4)
{
  int v6; // ebp
  char v7; // al

  sub_1025C5C0(a2, Source, a4, 0, 0);
  *(_DWORD *)this = &vgui::FrameButton::`vftable';
  *(_DWORD *)(this + 376) = 0;
  *(_DWORD *)(this + 380) = 0;
  *(_DWORD *)(this + 384) = 0;
  *(_DWORD *)(this + 388) = 0;
  v6 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 968))(a2) != 0 ? 12 : 18;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 968))(a2);
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, v7 != 0 ? 12 : 18, v6);
  *(_DWORD *)(this + 364) = 0;
  *(_DWORD *)(this + 368) = 0;
  *(_DWORD *)(this + 372) = 0;
  *(_BYTE *)(this + 392) = 1;
  sub_10249A90((int *)this, 0);
  sub_10249960(this, 2, 1);
  sub_10238E80((_DWORD *)this, 1);
  return this;
}
