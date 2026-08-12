bool __thiscall sub_1009A600(const char *this)
{
  const char *v1; // esi

  v1 = this + 116;
  return !_stricmp(this + 116, "#include")
      || !_stricmp(v1, "response")
      || !_stricmp(v1, "enumeration")
      || !_stricmp(v1, "criteria")
      || !_stricmp(v1, "criterion")
      || _stricmp(v1, "rule") == 0;
}
