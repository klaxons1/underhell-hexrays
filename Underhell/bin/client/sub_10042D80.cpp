void __thiscall sub_10042D80(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  char *v5; // eax
  double v6; // st7
  _BYTE v7[12]; // [esp+4h] [ebp-44h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-38h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v10[3]; // [esp+28h] [ebp-20h] BYREF
  float v11; // [esp+34h] [ebp-14h] BYREF
  float v12; // [esp+38h] [ebp-10h]
  float v13; // [esp+3Ch] [ebp-Ch]
  float v14; // [esp+40h] [ebp-8h] BYREF
  float v15; // [esp+44h] [ebp-4h] BYREF

  if ( (unsigned __int8)sub_101BC880() )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "C_BasePlayer::GetToolRecordingState", 0, "Tools", 0, 4);
    sub_10041810((int)this, a2, (int)this, a2);
    sub_1022ACA0("baseplayer", 1);
    sub_1022ACA0("localplayer", dword_10407394 == (_DWORD)this);
    if ( dword_1040D3A8 )
    {
      v3 = *(_DWORD *)(dword_1040D3A8 + 1192);
      v4 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
      v5 = (char *)(*(int (__thiscall **)(int, int))(v3 + 32))(dword_1040D3A8 + 1192, v4);
    }
    else
    {
      v5 = (char *)Locale;
    }
    sub_1022ABA0("playername", v5);
    if ( (dword_1040777C & 1) == 0 )
      dword_1040777C |= 1u;
    flt_10407760 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 952))(this);
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10439968 + 100))(dword_10439968);
    v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10439968 + 104))(dword_10439968);
    (*(void (__thiscall **)(_DWORD *, float *, float *, float *, float *, float *))(*this + 800))(
      this,
      &flt_10407764,
      &flt_10407770,
      &v14,
      &v15,
      &flt_10407760);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C)
      || !(*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
    {
      byte_1040775C = 0;
    }
    else
    {
      byte_1040775C = 1;
      (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 136))(off_103ED0D8, v10);
      v11 = v10[0];
      v12 = v10[1];
      v13 = 0.0;
      sub_101EE040(&v11, v9, v7, v8);
      v6 = -v10[2];
      flt_10407764 = v9[0] * v6 + flt_10407764;
      flt_10407768 = v9[1] * v6 + flt_10407768;
      flt_1040776C = v6 * v9[2] + flt_1040776C;
      flt_10407770 = v11;
      flt_10407774 = v12;
      flt_10407778 = v13;
    }
    sub_1022ACE0("camera", (int)&byte_1040775C);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
