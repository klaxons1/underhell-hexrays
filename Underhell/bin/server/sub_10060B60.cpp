int __thiscall sub_10060B60(int this)
{
  int result; // eax
  int v3; // eax

  result = sub_100607F0(this, -1);
  *(_DWORD *)(this + 148) = result;
  *(_DWORD *)(this + 168) = result;
  if ( result != -1 )
  {
    *(float *)(this + 180) = 0.0;
    v3 = sub_100C71D0(result, 0);
    *(_DWORD *)(this + 140) = v3;
    sub_100C6460(v3, 0.0);
    sub_100C4EE0(*(_DWORD *)(this + 140), 0.0);
    sub_100C4F40(*(_DWORD *)(this + 140), 1);
    result = sub_100C6320(*(_DWORD *)(this + 140), *(float *)(this + 180), *(float *)(this + 180));
    *(_BYTE *)(this + 136) = 0;
  }
  return result;
}
