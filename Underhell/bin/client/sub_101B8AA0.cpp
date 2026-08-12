int __thiscall sub_101B8AA0(int *this, int *a2)
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _BYTE v8[4]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v9[4]; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  int v11; // [esp+18h] [ebp-4h] BYREF
  int v12; // [esp+24h] [ebp+8h]

  sub_10241570(a2);
  (*(void (__thiscall **)(int *, _DWORD))(*this + 264))(this, 0);
  (*(void (__thiscall **)(int *, _DWORD))(*this + 260))(this, 0);
  v4 = *this;
  v12 = *a2;
  v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 228))(this, v9);
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD))(v12 + 20))(
                   a2,
                   v8,
                   "ZoomReticleColor",
                   *v5);
  (*(void (__thiscall **)(int *, _DWORD))(v4 + 220))(this, *v6);
  sub_10132120((int)&v10, (int)&v11);
  return sub_10236200(0, 0, v10, v11);
}
