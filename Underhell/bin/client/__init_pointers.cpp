int _init_pointers()
{
  int v0; // esi

  v0 = _encoded_null();
  sub_10299EBE(v0);
  sub_102903A8(v0);
  sub_1028EBCD(v0);
  sub_10299EAF(v0);
  _initp_misc_winsig(v0);
  return _initp_eh_hooks(v0);
}
