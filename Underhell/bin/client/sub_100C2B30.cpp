wchar_t *__thiscall sub_100C2B30(wchar_t *Destination, wchar_t *Source, float a3, float a4, float a5, char a6, char a7)
{
  double v8; // st7
  wchar_t *result; // eax

  *((float *)Destination + 2049) = 0.0;
  *((_BYTE *)Destination + 8208) = 0;
  *((float *)Destination + 2051) = a4;
  *((_DWORD *)Destination + 2053) = 0;
  *((_DWORD *)Destination + 2054) = 0;
  *((_BYTE *)Destination + 8220) = 0;
  *((_BYTE *)Destination + 8221) = a7;
  *((_DWORD *)Destination + 2056) = 0;
  *((_DWORD *)Destination + 2057) = 0;
  *((_DWORD *)Destination + 2058) = 0;
  *((_DWORD *)Destination + 2059) = 0;
  *((_DWORD *)Destination + 2060) = 0;
  wcsncpy(Destination, Source, 0x1000u);
  *((float *)Destination + 2049) = a3;
  *((float *)Destination + 2050) = a3;
  v8 = *(float *)(dword_1043082C + 44) + a5;
  *((_BYTE *)Destination + 8208) = a6;
  result = Destination;
  *((float *)Destination + 2048) = v8;
  return result;
}
