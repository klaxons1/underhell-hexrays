char *__thiscall sub_101F48D0(char *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  sub_101F6C40(a2, Source);
  *(_DWORD *)this = &CMDLPanel::`vftable';
  if ( !byte_104655E8 )
  {
    byte_104655E8 = 1;
    v4 = sub_10242540("CMDLPanel");
    *(_DWORD *)(v4 + 28) = sub_101F4390;
    *(_DWORD *)(v4 + 24) = sub_10242540("CPotteryWheelPanel");
  }
  if ( !byte_104655E9 )
  {
    byte_104655E9 = 1;
    v5 = sub_102484C0("CMDLPanel");
    *(_DWORD *)(v5 + 24) = sub_101F4390;
    *(_DWORD *)(v5 + 20) = sub_102484C0("CPotteryWheelPanel");
  }
  if ( !byte_104655EA )
  {
    byte_104655EA = 1;
    v6 = sub_10242580("CMDLPanel");
    *(_DWORD *)(v6 + 68) = sub_101F4390;
    *(_DWORD *)(v6 + 24) = sub_10242580("CPotteryWheelPanel");
  }
  sub_10235640(this + 1068);
  *((_DWORD *)this + 675) = 0;
  *((_DWORD *)this + 676) = 0;
  *((_DWORD *)this + 677) = 0;
  *((_DWORD *)this + 678) = 0;
  *((_DWORD *)this + 679) = 0;
  unknown_libname_2((_DWORD *)this + 680);
  unknown_libname_2((_DWORD *)this + 681);
  sub_10236310(1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(
    dword_1047CA74,
    *((_DWORD *)this + 17),
    0);
  v7 = sub_101F4260();
  v8 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v7 + 304))(v7, "editor/cubemap", 0, 1);
  sub_10233410(v8);
  v9 = sub_101F4260();
  v10 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v9 + 304))(v9, "editor/cubemap.hdr", 0, 1);
  sub_10233410(v10);
  sub_101EE350((float *)this + 663);
  this[2728] = this[2728] & 0xE0 | 0x10;
  return this;
}
