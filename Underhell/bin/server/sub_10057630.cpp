char __thiscall sub_10057630(int this, int *a2)
{
  char result; // al
  bool v4; // zf
  int *v5; // ecx

  result = (char)a2;
  v4 = *(_DWORD *)(this + 216) == 0;
  *(_DWORD *)(this + 224) = *a2;
  v5 = (int *)(this + 216);
  *(_DWORD *)(this + 228) = a2[1];
  if ( !v4 )
  {
    result = sub_10057030(dword_106921E0, v5, *a2);
    *(float *)(this + 80) = 0.0;
  }
  return result;
}
