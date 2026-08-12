void *__thiscall sub_1006D490(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  char v5; // dl

  sub_100347D0(this, a2);
  v3 = *(_DWORD *)(this + 1192);
  v4 = *(_DWORD *)(this + 1204);
  v5 = *(_BYTE *)(this + 1201);
  *(_DWORD *)(this + 1196) = v3;
  *(_DWORD *)(this + 1208) = v4;
  *(_BYTE *)(this + 1202) = v5;
  return memcpy_0((void *)(this + 1348), (const void *)(this + 1316), 4 * v3);
}
