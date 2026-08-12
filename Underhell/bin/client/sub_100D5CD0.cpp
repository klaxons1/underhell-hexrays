int __thiscall sub_100D5CD0(_DWORD *this)
{
  int (__stdcall *v2)(const char *); // edx
  int v3; // edi
  int result; // eax
  int v5; // edi

  v2 = *(int (__stdcall **)(const char *))(*this + 72);
  this[45] = 0;
  if ( !v2("in_graph") )
  {
    v3 = sub_100DDA40(40);
    sub_102282F0((char *)v3, "in_graph", 0x20u);
    *(_DWORD *)(v3 + 32) = &unk_10432698;
    *(_DWORD *)(v3 + 36) = this[45];
    this[45] = v3;
  }
  result = (*(int (__thiscall **)(_DWORD *, const char *))(*this + 72))(this, "in_jlook");
  if ( !result )
  {
    v5 = sub_100DDA40(40);
    result = sub_102282F0((char *)v5, "in_jlook", 0x20u);
    *(_DWORD *)(v5 + 32) = &unk_104326EC;
    *(_DWORD *)(v5 + 36) = this[45];
    this[45] = v5;
  }
  return result;
}
