void __thiscall sub_1002A520(_DWORD *this, int a2)
{
  int *v3; // ebx
  int v4; // eax
  void *v5; // esp
  double v6; // st7
  _DWORD *v7; // edi
  char v8; // al
  float v9; // [esp+14h] [ebp-14h]
  _BYTE v10[12]; // [esp+18h] [ebp-10h] BYREF
  _BYTE *v11; // [esp+24h] [ebp-4h]

  if ( (unsigned __int8)sub_101BC880() )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseAnimating::GetToolRecordingState", 0, "Tools", 0, 4);
    if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
      sub_10026520((int)this);
    v3 = (int *)this[485];
    if ( v3 && *v3 )
    {
      v4 = *(_DWORD *)(*v3 + 156);
    }
    else
    {
      v3 = 0;
      v4 = 1;
    }
    v5 = alloca(48 * v4);
    v6 = *((float *)off_103DC81C + 3);
    v11 = v10;
    v9 = v6;
    v7 = this + 1;
    if ( v3 )
      (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD, int, float))(*v7 + 64))(
        this + 1,
        v10,
        *(_DWORD *)(*v3 + 156),
        524032,
        COERCE_FLOAT(LODWORD(v9)));
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, float))(*v7 + 64))(
        this + 1,
        0,
        -1,
        524032,
        COERCE_FLOAT(LODWORD(v9)));
    sub_10038850(a2);
    dword_10404540 = (*(int (__thiscall **)(_DWORD *))(*v7 + 156))(this + 1);
    dword_10404544 = this[300];
    dword_10404548 = this[452];
    dword_1040454C = 0;
    sub_1022ACE0("baseanimating", (int)&dword_10404540);
    v8 = (*(int (__thiscall **)(_DWORD *))(*this + 724))(this);
    sub_1022ACA0("viewmodel", v8 != 0);
    if ( v3 )
      dword_1040454C = (int)sub_10027450(this, v3, (int)v11);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
