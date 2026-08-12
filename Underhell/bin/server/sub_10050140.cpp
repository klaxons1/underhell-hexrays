int __thiscall sub_10050140(int this)
{
  bool v2; // bl

  v2 = -1.0 != *(float *)(this + 44) && !sub_1004FBE0((float *)(this + 32), *(_DWORD *)(this + 4));
  if ( sub_10023D10(*(_DWORD **)(this + 4), 50) )
    return sub_1004B430((_DWORD **)this);
  if ( v2 )
    return sub_10023D10(*(_DWORD **)(this + 4), 21) ? 43 : 100002;
  return 100000;
}
