int _init_pointers()
{
  void *v0; // esi

  v0 = (void *)_encoded_null();
  sub_10443BC6(v0);
  sub_1043AE6E(v0);
  sub_10437B5A(v0);
  sub_10443BB7(v0);
  _initp_misc_winsig(v0);
  return _initp_eh_hooks(v0);
}
