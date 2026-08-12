int __thiscall sub_10348F00(void *this)
{
  const char **v2; // esi
  const char **v3; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  sub_100E8220((int)this, "models/combine_dropship_container.mdl");
  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, "models/combine_dropship_container.mdl");
  sub_10214020((int)this, (int)this);
  v2 = (const char **)off_10670864;
  do
    sub_100E8220((int)this, *v2++);
  while ( (int)v2 < (int)&off_10670870 );
  sub_100E8220((int)this, off_10670870);
  v3 = (const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  return sub_10213890(*v3);
}
