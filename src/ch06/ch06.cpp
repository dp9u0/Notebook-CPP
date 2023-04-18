int increment_once()
{
  static bool called = false;
  if (called)
  {
    return 1;
  }
  called = true;
  return 0;
}