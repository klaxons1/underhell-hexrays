_DWORD *__thiscall sub_10130B30(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  sub_10243490(0, "CDebugOverlay");
  *this = &CDebugOverlay::`vftable';
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v8, &v9);
  sub_10236550(a2);
  sub_102361A0(v8, v9);
  sub_10236140(0, 0);
  sub_10236310(0);
  sub_10237030(0);
  this[51] = 0;
  sub_10237590(0);
  sub_10239D10(0);
  v3 = dword_1047CA7C;
  v4 = *(_DWORD *)dword_1047CA7C;
  v5 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         6,
         "resource/ClientScheme.res",
         "Client");
  v6 = (*(int (__thiscall **)(int, int))(v4 + 48))(v3, v5);
  sub_10236970(v6);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, this[17], 250);
  return this;
}
